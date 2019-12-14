#include <iostream>
#include "huffman.h"
using namespace std;

int main()
{
	string in, out;
	cout << "---NEN TAP TIN---" << endl;
	cout << "Chon chuc nang:" << endl;
	cout << "1. Nen tap tin" << endl;
	cout << "2. Giai nen" << endl;
	cout << "3. Thoat" << endl;
	cout << ">>";
	int opt;
	cin >> opt;
	switch (opt)
	{
	case 1:
	{
		string infile, outfile;
		cout << "Nhap duong dan:" << endl;
		cout << ">>";
		cin >> infile;
		in = infile;
		out = infile + ".huf";
		cout << "Nhap ten file sau khi nen:" << endl;
		cout << ">>";
		cin >> outfile;
		out = outfile + ".huf";
		huffman h(in, out);
		h.create_pq();
		h.create_huffman_tree();
		h.calculate_huffman_codes();
		h.coding_save();
		cout << endl;
		cout << "--- NEN TAP TIN THANH CONG ---";
		cout << endl;
	}
	case 2:
	{
		string infile, outfile;
		cout << "Nhap duong dan:" << endl;
		cout << ">>";
		cin >> infile;
		in = infile;
		out = infile + ".txt";
		cout << "Nhap ten file sau khi giai nen:" << endl;
		cout << ">>";
		cin >> outfile;
		out = outfile + ".txt";
		huffman h(in, out);
		h.recreate_huffman_tree();
		h.decoding_save();
		cout << endl;
		cout << "--- GIAI NEN TAP TIN THANH CONG ---";
		cout << endl;
	}
	case 3: break;
	default:
		cout << "Khong hop le." << endl;
	}
	cout << "--- DA THOAT ----" << endl;
	system("pause");
	return 0;
}