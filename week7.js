let lastIntent = null;

function contextResponse(intent) {
    if (lastIntent && intent === "general") {
        return "Earlier topic was: " + lastIntent;
    }
    lastIntent = intent;
}
