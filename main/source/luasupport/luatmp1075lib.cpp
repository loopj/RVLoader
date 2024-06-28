#include <libgui.h>
#include <gccore.h>
#include <lua.hpp>
#include "main.h"
#include "luasupport.h"
#include "tmp1075.h"

static int lua_TMP1075_isConnected(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc != 0) {
        return luaL_error(L, "wrong number of arguments");
    }

    lua_pushboolean(L, TMP1075::isConnected());

    return 1;
}

static int lua_TMP1075_getTemperature(lua_State* L) {
    int argc = lua_gettop(L);
    if (argc != 0) {
        return luaL_error(L, "wrong number of arguments");
    }

    lua_pushnumber(L, TMP1075::getTemperature());

    return 1;
}


static const luaL_Reg TMP1075_functions[] = {
    {"isConnected", lua_TMP1075_isConnected},
    {"getTemperature", lua_TMP1075_getTemperature},
    {NULL, NULL}
};

void luaRegisterTMP1075Lib(lua_State* L) {
    lua_newtable(L);
    luaL_setfuncs(L, TMP1075_functions, 0);
    lua_setglobal(L, "TMP1075");
}
