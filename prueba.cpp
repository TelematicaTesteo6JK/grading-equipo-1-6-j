/*
EQUIPO 1 6J

DANIEL GERONIMO CHACON CARRILLO
JOSE LUIS OCON ALVAREZ
ALAN ALBERTO CERNA OLIVARES
*/

#include <iostream>
#include "libreria.h"
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;

    vector<string> list;
    std::ofstream outfile ("test.txt");

    while (n < 1)
    {
        n++;
    
        list.push_back("valor ");
        list.push_back(" resultadoEsperado");
        list.push_back(" resultadoObtenido");
        list.push_back(" veredicto");

        list.push_back("\n");
        list.push_back("-1          ");
        list.push_back("  FAIL           ");
        list.push_back(australianToAmerican(-1));
        list.push_back("            ");
        list.push_back(veredicto("FAIL", australianToAmerican(-1)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("100.0          ");
        list.push_back("  HD           ");
        list.push_back(australianToAmerican(100.0));
        list.push_back("            ");
        list.push_back(veredicto("HD", australianToAmerican(100.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("52.0          ");
        list.push_back("  P           ");
        list.push_back(australianToAmerican(52.0));
        list.push_back("            ");
        list.push_back(veredicto("P", australianToAmerican(52.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("69.0          ");
        list.push_back("  C           ");
        list.push_back(australianToAmerican(69.0));
        list.push_back("            ");
        list.push_back(veredicto("C", australianToAmerican(69.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("81.0          ");
        list.push_back("  D           ");
        list.push_back(australianToAmerican(81.0));
        list.push_back("            ");
        list.push_back(veredicto("D", australianToAmerican(81.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("105.0          ");
        list.push_back("  FAIL           ");
        list.push_back(australianToAmerican(105.0));
        list.push_back("            ");
        list.push_back(veredicto("FAIL", australianToAmerican(105.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("0.0          ");
        list.push_back("  N           ");
        list.push_back(australianToAmerican(0.0));
        list.push_back("            ");
        list.push_back(veredicto("N", australianToAmerican(0.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("49.9          ");
        list.push_back("  N           ");
        list.push_back(australianToAmerican(49.9));
        list.push_back("            ");
        list.push_back(veredicto("N", australianToAmerican(49.9)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("50.0          ");
        list.push_back("  P           ");
        list.push_back(australianToAmerican(50.0));
        list.push_back("            ");
        list.push_back(veredicto("P", australianToAmerican(50.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("62.9          ");
        list.push_back("  P           ");
        list.push_back(australianToAmerican(62.9));
        list.push_back("            ");
        list.push_back(veredicto("P", australianToAmerican(62.9)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("63.0          ");
        list.push_back("  C           ");
        list.push_back(australianToAmerican(63.0));
        list.push_back("            ");
        list.push_back(veredicto("C", australianToAmerican(63.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("72.9          ");
        list.push_back("  C           ");
        list.push_back(australianToAmerican(72.9));
        list.push_back("            ");
        list.push_back(veredicto("C", australianToAmerican(72.9)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("73.0          ");
        list.push_back("  D           ");
        list.push_back(australianToAmerican(73.0));
        list.push_back("            ");
        list.push_back(veredicto("D", australianToAmerican(73.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("82.9          ");
        list.push_back("  D           ");
        list.push_back(australianToAmerican(82.9));
        list.push_back("            ");
        list.push_back(veredicto("D", australianToAmerican(82.9)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("83.0          ");
        list.push_back(" HD           ");
        list.push_back(australianToAmerican(83.0));
        list.push_back("            ");
        list.push_back(veredicto("HD", australianToAmerican(83.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("100.0          ");
        list.push_back(" HD           ");
        list.push_back(australianToAmerican(100.0));
        list.push_back("            ");
        list.push_back(veredicto("HD", australianToAmerican(100.0)));
        list.push_back("\n");

        list.push_back("\n");
        list.push_back("100.1          ");
        list.push_back("  FAIL           ");
        list.push_back(australianToAmerican(100.1));
        list.push_back("            ");
        list.push_back(veredicto("FAIL", australianToAmerican(100.1)));
        list.push_back("\n");
    }

    for(int i=0; i < list.size();i++)
    {
        outfile<<list[i];
    }

    outfile.close();
}