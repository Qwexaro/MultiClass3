#include "Header.h"

void batch()
{
    int count_phones = 0;
    std::string color;
    std::vector<MyPhone> phones_not_brak;
    std::vector<MyPhone> brak_phones;
    std::vector<int> uniqum_id;

    std::cout << "введи количество телефонов в партии: ";
    std::cin >> count_phones;
    std::cout << "введи цвет партии: ";
    std::cin >> color;

    for (int i = 0; i < count_phones; i++)
    {
        int id_insert = rand() % 56 - 5;
        bool is_uniqum = true;


        for (int j = 0; j < uniqum_id.size(); j++)
        {
            if (uniqum_id[j] == id_insert)
            {
                brak_phones.push_back(MyPhone().redact(id_insert, color, 74, 74, 24, 300));
                is_uniqum = false;
                break;
            }
        }


        if (is_uniqum)
        {
            uniqum_id.push_back(id_insert);

            if (id_insert < 0)
            {
                brak_phones.push_back(MyPhone().redact(id_insert, color, 74, 74, 24, 300));
            }
            else
            {
                phones_not_brak.push_back(MyPhone().redact(id_insert, color, 74, 74, 24, 300));
            }
        }
    }

    std::cout << "Женатые телефоны:" << std::endl;
    for (int i = 0; i < brak_phones.size(); i++)
    {
        brak_phones.at(i).info();
    }


    std::cout << "\nНе женатые телефоны:" << std::endl;
    for (int i = 0; i < phones_not_brak.size(); i++)
    {
        phones_not_brak.at(i).info();
    }
}

int main()
{
    system("chcp 1251");
    batch();
    return 0;
}
