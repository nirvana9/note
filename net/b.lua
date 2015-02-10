#!/usr/bin/lua

socket = require "socket"
print(socket._VERSION)
print("-------------------------------")

-- load required modules
http = require "socket.http"
mime = require "mime"


r, c = http.request {
  url = "http://nienie.im/",
}
print("r="..r)
print("c="..c)
print("-------------------------------")
