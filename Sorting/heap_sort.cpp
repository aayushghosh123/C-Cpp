// C++ program for implementation of Heap Sort 
#include <iostream> 

using namespace std; 

// To heapify a subtree rooted with node i which is 
// an index in arr[]. n is size of heap 
void heapify(int arr[], int n, int i) 
{ 
    cout<<"n = "<<n<<endl;
    cout<<"i = "<<i<<endl;
	int largest = i; // Initialize largest as root 
	int l = 2*i + 1; // left = 2*i + 1 
	int r = 2*i + 2; // right = 2*i + 2 
    cout<<"l = "<<l<<endl;
    cout<<"r = "<<r<<endl;
	// If left child is larger than root 
	if (l < n && arr[l] > arr[largest]) 
		largest = l; 

	// If right child is larger than largest so far 
	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	// If largest is not root 
	cout<<"largest = "<<largest<<endl;
	if (largest != i) 
	{ 
        cout << arr[i] <<endl;
		swap(arr[i], arr[largest]); 
        cout << arr[i] <<endl;
		// Recursively heapify the affected sub-tree 
		heapify(arr, n, largest);
        cout<<"-------f--------"<<endl;
        for (int i=0; i<n; ++i){
		cout << arr[i] <<endl;}
        cout<<"-------f--------"<<endl;
	} 
}

// main function to do heap sort 
void heapSort(int arr[], int n) 
{ 
	// Build heap (rearrange array) 
	for (int i = n / 2 - 1; i >= 0; i--){
		cout<<arr[i]<<"------"<<endl;
		cout<<"i = "<<i<<endl;
    	heapify(arr, n, i); 
    }
	// One by one extract an element from heap 
	for (int i=n-1; i>=0; i--) 
	{ 
		// Move current root to end
		cout<<"arr[0] = "<<arr[0]<<endl;
		cout<<"arr[i] = "<<arr[i]<<endl;
		swap(arr[0], arr[i]); 
		cout<<"arr[0] = "<<arr[0]<<endl;
		cout<<"arr[i] = "<<arr[i]<<endl;
        cout<<"---------------"<<endl;
        for (int i=0; i<n; ++i){
		cout << arr[i] <<endl;}
        cout<<"---------------"<<endl;
		// call max heapify on the reduced heap 
		heapify(arr, i, 0); 
        cout<<"-------After--------"<<endl;
        for (int i=0; i<n; ++i){
		cout << arr[i] <<endl;}
        cout<<"--------After-------"<<endl;
	}
} 

/* A utility function to print array of size n */
void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; ++i) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 

// Driver program 
int main() 
{ 
	int arr[] = {9,3,1,10,14}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	heapSort(arr, n); 

	cout << "Sorted array is \n"; 
	printArray(arr, n); 
} 
