#include <iostream>
using namespace std;

string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total = 0;

void enter()
{
    int choice;
    cout << "How Many Students Do You Want To Enter";
    cin >> choice;

    if (total == 0)
    {
        total += choice;

        for (int i = 0; i < choice; i++)
        {
            cout << "\nEnter data of Student :" << i + 1 << endl
                 << endl;
            cout << "Enter Name : ";
            cin >> arr1[i];
            cout << "Enter Roll No. : ";
            cin >> arr2[i];
            cout << "Enter Course : ";
            cin >> arr3[i];
            cout << "Enter Class : ";
            cin >> arr4[i];
            cout << "Enter Contact : ";
            cin >> arr5[i];
        }
    }
    else
    {
        for (int i = total; i < total + choice; i++)
        {
            cout << "\nEnter data of Student :" << i + 1 << endl
                 << endl;
            cout << "Enter Name : ";
            cin >> arr1[i];
            cout << "Enter Roll No. : ";
            cin >> arr2[i];
            cout << "Enter Course : ";
            cin >> arr3[i];
            cout << "Enter Class : ";
            cin >> arr4[i];
            cout << "Enter Contact : ";
            cin >> arr5[i];
        }
        total += choice;
    }
}

void deleterecord()
{
    if (total = 0)
    {
        cout << "NO RECORD IS ENTERED ! " << endl;
    }
    else
    {
        int a;
        cout << "Press 1 to delete FULL RECORD " << endl;
        cout << "Press 2 to delete a SPECIFIC DATA " << endl;
        cin >> a;

        if (a == 1)
        {
            total = 0;
            cout << "WHOLE RECORD IS DELETED ";
        }
        else if (a == 2)
        {
            string rollno;
            cout << "Enter the roll no. which data you want to delete : " << endl;
            cin >> rollno;

            for (int i = 0; i < total; i++)
            {
                if (rollno == arr2[i])
                {
                    for (int j = i; j < total; j++)
                    {
                        arr1[j] = arr1[j + 1];
                        arr2[j] = arr2[j + 2];
                        arr3[j] = arr3[j + 1];
                        arr4[j] = arr4[j + 1];
                        arr5[j] = arr5[j + 1];
                    }
                    total--;
                    cout << "Your Required record is deleted ! ";
                }
            }
        }
    }
}

void show()
{
    if (total = 0)
    {
        cout << "NO RECORD IS ENTERED ! " << endl;
    }
    else
    {

        for (int i = 0; i < total; i++)
        {
            cout << "Data of Student : " << i + 1 << endl
                 << endl;
            cout << "Name : " << arr1[i] << endl;
            cout << "Roll no. : " << arr2[i] << endl;
            cout << "Course : " << arr3[i] << endl;
            cout << "Class : " << arr4[i] << endl;
            cout << "Contact : " << arr5[i] << endl;
        }
        cout << endl;
    }
}

void update()
{
    if (total = 0)
    {
        cout << "NO RECORD IS ENTERED ! " << endl;
    }
    else
    {
        string rollno;
        cout << "Enter the Roll no. you want to search - ";
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                cout << "Previous Data" << endl
                     << endl;
                cout << "Details of the student : " << i + 1 << endl
                     << endl;
                cout << "Name : " << arr1[i] << endl;
                cout << "Roll No. : " << arr2[i] << endl;
                cout << "Course : " << arr3[i] << endl;
                cout << "Class : " << arr4[i] << endl;
                cout << "Contact : " << arr5[i] << endl;

                cout << "\nEnter new data : ";
                cout << "\nEnter Name : ";
                cin >> arr1[i];
                cout << "\nEnter Roll No. : ";
                cin >> arr2[i];
                cout << "Enter Course : ";
                cin >> arr3[i];
                cout << "\nEnter Class : ";
                cin >> arr4[i];
                cout << "Enter Contact : ";
                cin >> arr5[i];
            }
        }
    }
}

void search()
{
    if (total = 0)
    {
        cout << "NO RECORD IS ENTERED ! " << endl;
    }
    else
    {
        string rollno;
        cout << "Enter the Roll no. you want to search - ";
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                cout << "Details of the student : " << i + 1 << endl
                     << endl;
                cout << "Name : " << arr1[i] << endl;
                cout << "Roll No. : " << arr2[i] << endl;
                cout << "Course : " << arr3[i] << endl;
                cout << "Class : " << arr4[i] << endl;
                cout << "Contact : " << arr5[i] << endl;
            }
        }
    }
}

int main()
{

    int value;

    while (true)
    {
        cout << "Press 1 to enter the data" << endl;
        cout << "Press 2 to show the data" << endl;
        cout << "Press 3 to update the data" << endl;
        cout << "Press 4 to delete the data" << endl;
        cout << "Press 5 to search the data" << endl;
        cout << "Press 6 to exit the data" << endl;

        cin >> value;
        switch (value)
        {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            update();
            break;
        case 4:
            deleterecord();
            break;
        case 5:
            search();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid Input";
            break;
        }
    }
}