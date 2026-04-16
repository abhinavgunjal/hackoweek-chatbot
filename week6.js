function extractEntities(text) {
    return {
        date: text.match(/\d{1,2}\/\d{1,2}\/\d{2,4}/)?.[0] || null,
        number: text.match(/\d+/)?.[0] || null
    };
}
