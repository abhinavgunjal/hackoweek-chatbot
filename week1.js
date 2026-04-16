function basicFAQ(input) {
    if (input.includes("fees")) return "Fees is ₹80k/year";
    if (input.includes("exam")) return "Exam at semester end";
    if (input.includes("hostel")) return "Hostel available";

    return "Sorry, I don't understand.";
}
