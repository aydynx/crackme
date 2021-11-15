local password = "crackme"
local userInput = io.read()

print("password: ")
if userInput == password then
    print("success!")
else
    print("fail.")
end