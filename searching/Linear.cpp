#include <iostream>
#include <vector>
using namespace std;

int linerSearch(vector<int> a, int key)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    vector<int> a;
    int n, key;
    cout << "enter no of element:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "enter element" << i << ":";
        cin >> x;
        a.push_back(x);
    }
    cout << "enter element you want to search : ";
    cin >> key;

    int ans = linerSearch(a, key);
    if (ans == -1)
    {
        cout << "not found";
    }
    else
    {
        cout << "found at index " << ans;
    }

    return 0;
}