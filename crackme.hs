main = do
    putStrLn "password: "
    password <- getLine
    if password == "crackme"
        then putStr "success!"
        else putStr "fail."