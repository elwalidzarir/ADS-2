
int countPairs1(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value) {
                count += 1;
            }
        }
    }
    return count;
}

int finding_value_in_array(int *arr, int start, int size, int value) {
    int first = start;
    int last = size - 1;
    int middle = (last + first) / 2;
    int count = 0;
    while (first <= last) {
        if (arr[middle] < value) {
            first = middle + 1;
        } else if (arr[middle] > value) {
            last = middle - 1;
        } else {
            for (int i = first; i <= last; i++) {
                if (arr[i] == arr[middle]) {
                    count++;
                }
            }
            return count;

        }
        middle = (first + last) / 2;
    }
    return count;
}

// a + b = value
// b = value - a
int countPairs3(int *arr, int len, int value) {
    int c = 0;
    int k = 0;
    for (int i = 0; i < len; i++) {
        int found_count = finding_value_in_array(arr, ++k, len, value - arr[i]);
        if (found_count != 0) {
            c += found_count;
        }
    }
    return c;
}

int countPairs2(int *arr, int len, int value) {

    int count = 0;
    int i_end = len - 1;
    int i_start = 0;
    int j_end = 0;
    int j_start = len - 1;

    for (int i = i_start; i < i_end; i++) {
        for (int j = j_start; j >= j_end && j > i; j--) {
            if (arr[i] + arr[j] > value) {
                i_end = j - 1;
            }
            if (arr[i] + arr[j] < value) {
                j_end = i + 1;
            } else if (arr[i] + arr[j] == value) {
                count++;
            }
        }

    }
    return count;
}
