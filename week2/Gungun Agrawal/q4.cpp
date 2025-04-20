#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " <<n << " elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxcount = 0;
    for(int i = 0; i < n; i++) 
    {
        int count = 0;
        for(int j = 0; j <n; j++)
        {
            if(arr[i] == arr[j]) 
            {
                count++;
            }
        }
        if(count > maxcount) 
        {
            maxcount = count;
        }
    }
    if(maxcount == 1) 
    {
        cout << "All elements are distinct. No repeating element." << endl;
    } 
    else 
    {
        cout << "max occurring element( " << maxcount << " times): ";
        for(int i = 0; i <n; i++) 
        {
            int count = 0;
            for(int j = 0; j <n; j++) 
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
            int appearedbefore = 0;
            for(int k = 0; k < i; k++) 
            {
                if(arr[k] == arr[i]) 
                {
                    appearedbefore = 1;
                    break;
                }
            }

            if(count == maxcount && appearedbefore == 0) 
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
