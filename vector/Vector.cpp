
#include<vector>
#include<algorithm>


struct Persona
{
	std::string nombre;
	int fechaNacimiento;
	int dni;
};



std::vector<int >v1 (5);
std::vector<int> v2 (10);
std::vector<int> v3 ({ 10,9,8,7,6,5,4,3,2,1 });
std::vector<std::string> v4 ({ "Gertrudoz","Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia" });
std::vector<int> v5 (v3);
std::vector<Persona> v6(3);
 
std::vector<int> AddVectros(std::vector<int> v1, std::vector<int> v2)
{
	std::vector<int> v3(sizeof(v1));

	for (int i = 0; i < v1.size(); i++  )
	{
		v3[i] = v1[i] + v2[i];
	}

	return v3;

}

void ConcatVectors(std::vector<int> &v1, std::vector<int> &v2)
{
	int aux = 1;
	for (int i = 0; i < sizeof(v2); i++)
	{
		v1.insert(v1.begin() + aux, v2[i]);
		aux += 2;
	}

}

void ConcatVectors2(std::vector<int> &v1, std::vector<int> &v2)
{
	v1.insert(v1.end(), v2.begin(),v2.end());
}

void ShiftRight(std::vector<int> &vAux)
{
	vAux.insert(vAux.begin(), rand()%10);

}

void RotateLeft(std::vector<int> &v1)
{
	int aux = v1 [0];

	for (int i = sizeof(v1) - 1; i >= 1; i--)
	{
		v1.emplace(v1.begin()+i-1, v1.begin()+i);
	}
	v1 [sizeof(v1) - 1] = aux;
}