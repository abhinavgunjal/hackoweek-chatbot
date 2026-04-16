function classifyIntent(text) {
    if (text.match(/fee|payment/)) return "fees";
    if (text.match(/exam|result/)) return "exam";
    if (text.match(/hostel/)) return "hostel";
    return "general";
}
