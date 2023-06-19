#!/bin/bash
cp /path/to/your/shared/library.so .
export LD_PRELOAD=./shared-library.so
