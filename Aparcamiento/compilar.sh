#!/bin/bash

g++ principal.cpp garaje.cpp plaza.cpp -o garaje 2> log.txt
cat log.txt | grep error
