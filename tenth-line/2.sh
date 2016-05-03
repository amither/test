#!/bin/bash
awk '{i++; if (i==10){print $0;exit;}}' file.txt 
