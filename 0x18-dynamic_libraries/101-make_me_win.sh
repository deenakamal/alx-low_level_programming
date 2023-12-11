#!/bin/bash
wget -P /m https://github.com/deenakamal/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/m/libgiga.so
