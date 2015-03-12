#!/bin/bash

curl http://v0.api.upyun.com/sylvanas -F file=@1.png -F policy=$1 -F signature=$2
