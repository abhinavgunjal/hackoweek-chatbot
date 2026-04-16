const synonyms = {
    fees: ["fees", "fee", "payment", "tuition"],
    exam: ["exam", "test", "result"],
    hostel: ["hostel", "room", "stay"]
};

function matchSynonym(text) {
    for (let key in synonyms) {
        if (synonyms[key].some(word => text.includes(word))) {
            return key;
        }
    }
    return "general";
}
