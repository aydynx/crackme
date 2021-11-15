const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("password: ", function(password) {
    if (password === "crackme") {
        console.log("success!");
    } else console.log("fail.");

    rl.close();
});