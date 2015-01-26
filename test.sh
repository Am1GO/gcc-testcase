#!/bin/bash -x
rm -f testcase.pb* testcase
protoc testcase.proto --cpp_out=./
[[ -z $CXX ]] && CXX=g++
$CXX -g -lprotobuf -lstdc++ -o testcase *cc
