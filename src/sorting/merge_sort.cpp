/*
 * Merge Sort
 * CLRS - Chapter 2.3
 * 
 * Time Complexity:
 *   - Best: O(n log n)
 *   - Worst: O(n log n)
 *   - Average: O(n log n)
 *
 * Space Complexity: O(n)
 */

#include <vector>

static void merge(std::vector<int>& input, size_t p, size_t q, size_t r) {
    size_t nl = q-p+1; // length of input[p:q]
    size_t nr = r-q; // length of input[p+1:r]

    std::vector<int> L;
    std::vector<int> R;
    L.resize(nl);
    R.resize(nr);

    for (size_t i = 0; i < nl; i++) { 
        L[i] = input[p+i]; // copy A[p:q] into L[0:nl-1]
    }
    for (size_t j = 0; j < nr; j++) {
        R[j] = input[q+j+1]; // copy A[q+1:r] into R[0:nr-1]
    }

    size_t i = 0, j = 0; // i indexes the samllest remaining element in L, j indexes the smallest remaining element in R
    size_t k = p;

    // as long as each of the arrys L and R contains an unmerged element, 
    // copy the smallest unmerged element back in A[p:r]
    while (i < nl && j < nr) {
        if (L[i] <= R[j]) {
            input[k] = L[i];
            i++;
        } else {
            input[k] = R[j];
            j++;
        }
        k++;
    }

    // having gone through on of L and R entirely, copy the 
    // remainder of the other to the end of the input[p:r]
    while (i < nl) {
        input[k] = L[i];
        i++, k++;
    }
    while (j < nr) {
        input[k] = R[j];
        j++, k++;
    }
}

void merge_sort(std::vector<int>& input, size_t p, size_t r) {
    if (p >= r || input.empty()) return;
    size_t q = (p+r)/2;
    merge_sort(input, p, q);
    merge_sort(input, q+1, r);
    merge(input, p,q,r);
}