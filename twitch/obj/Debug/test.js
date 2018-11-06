var page = require('webpage').create();
page.open('https://www.twitch.tv/directory/game/Smite', function () {
    console.log(page.content);
    phantom.exit();
});