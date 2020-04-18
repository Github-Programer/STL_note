#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> myset;
    for (int i = 0; i < 10; i++)
        myset.insert(10 - i);
    
    cout << "��һ��Ԫ��:" << endl;
    cout << *myset.begin() << endl; //�Ǻ�
    cout << "���һ��Ԫ��:" << endl;
    cout << *myset.end() << endl;
    cout << "�Ƿ�Ϊ��?" << endl;
    cout << boolalpha << myset.empty() << endl;
    cout << "Ԫ�ظ�����" << endl;
    cout << myset.size() << endl;
    cout << "ĳ��ֵԪ�صĸ�����" << endl;
    cout << myset.count(1) << endl;

    //ɾ��
    myset.erase(myset.begin());
    myset.erase(2);

    //����set����
    set<int>::iterator it1; //������
    for (it1 = myset.begin(); it1 != myset.end(); it1++)
        cout << *it1 << endl;
    return 0;
}