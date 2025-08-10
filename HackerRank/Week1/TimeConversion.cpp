#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    int n = s.size();
    string ampm = "";
    ampm += s[n - 2];
    ampm += s[n - 1];
    string hr = "";
    hr += s[0];
    hr += s[1];
    string ans = "";
    int hours = stoi(hr);
    if (ampm == "AM") {
        if (hours == 12) hours = 0; 
    } else {
        if (hours != 12) hours += 12; 
    }

    if (hours >= 10)
        hr = to_string(hours);
    else if (hours == 0) {
        hr = "00";
    } else {
        hr = to_string(hours);
        hr.insert(hr.begin(), '0');
    }

    ans = hr;
    for (int i = 2; i < n - 2; i++) {
        ans += s[i];
    }
    return ans;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
