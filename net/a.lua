#!/usr/bin/lua

local http = require("socket.http")
local ltn12 = require("ltn12")
 
function http.get(u)
   local t = {}
   local r, c, h = http.request{
      url = u,
--      sink = ltn12.sink.table(t
      }
   return r, c, h, table.concat(t)
end
 
--url = "http://webtools.nienie.im/api/backtrack"
url = "https://apitest.wecomics.cn/jsonrpc/apicheck.json"

r,c,h,body=http.get(url)
print ("====",c)
if c~= 200 then
	print "---------"
    return
end
print("===========")
print(body)
