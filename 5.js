function removeDuplicates(arr) {
    return [...new Set(arr)];
}

// Example usage:
const originalArray = [1, 2, 2, 3, 4, 4, 5];
const uniqueArray = removeDuplicates(originalArray);

console.log(uniqueArray);
