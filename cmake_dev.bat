mkdir build
cd build
cmake .. -G "Visual Studio 14 2015 Win64" -DLIBUV_ROOT=C:\workspace\lib\network\libuv-win32 -DMSGPACK_ROOT=C:\workspace\lib\protocol\msgpack\prebuilt -DPROJECT_ENABLE_SAMPLE=ON