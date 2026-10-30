// Problem 1 - The Celebrity Problem

// stack<int>st;
// for(int i=n-1 ; i >= 0 ; i--) {
//     st.push(i);
// }
// while(st.size() > 1) {
//     int first = st.top();
//     st.pop();
//     int second = st.top();
//     st.pop();

//     if(m[first][second] && !m[second][first]) {
//         st.push(second);
//     }
//     else if(!m[first][second] && m[second][first]) {
//         st.push(first);
//     }
// }

// if (st.empty()) return -1; // no celebrity

// int num = st.top();
// st.pop();

// int row=0, col=0;
// for(int i=0 ; i<n ; i++) {
//     row += m[num][i];
//     col += m[i][num];
// }

// return row == 0 && col == n-1 ? num : -1;