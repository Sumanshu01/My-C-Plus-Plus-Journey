// SIMPLE PRINT (FOR LOOP)
    // int myNumbers[5] = {10, 20, 30, 40, 50};
    // for (int i = 0; i < 5; i++) {
    // cout << myNumbers[i] << "\n";
    // }
// .............................................................
// METHOD 2
    // int myNumbers[5] = {10, 20, 30, 40, 50};
    // for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
    // cout << myNumbers[i] << "\n";
    // }
// ..............................................................
// FOR EACH LOOP METHOD
    // int myNumbers[5] = {10, 20, 30, 40, 50};
    // for (int i : myNumbers) {
    // cout << i << "\n";
    // }
// ................................................................
// IN ALL CASES OUTPUT WILL BE:
//     10
//     20
//     30
//     40
//     50
