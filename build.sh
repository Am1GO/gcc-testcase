#!/bin/bash -x
rm -f testcase.pb* testcase
protoc testcase.proto --cpp_out=./
g++ -g -lprotobuf -o testcase *cc
