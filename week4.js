const docs = [
    "fees structure payment",
    "exam result schedule",
    "hostel mess facility"
];

function score(query, doc) {
    let q = query.split(" ");
    let d = doc.split(" ");
    return q.filter(word => d.includes(word)).length;
}
