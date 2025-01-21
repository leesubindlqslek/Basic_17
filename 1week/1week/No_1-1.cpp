//1강 객체 지향 프로그래밍

#include <iostream>
using namespace std;

class Animal
{
protected:
	string name;
	string sound;
	int hp;

public:
	Animal(string _name, string _sound, int _hp)
{
		name = _name;
		sound = _sound;
		hp = _hp;
}

	void SoundPlay()
	{
		cout << name << " : " << sound << endl;
		cout << "데미지 : " << hp << endl;
	}

public:
	virtual void SoundPlay() = 0;
	virtual void Walk() = 0;
};

class Dog : public Animal
{
public:
  Dog(string name, string sound, int _hp) : Animal(name, sound, _hp)
  {
  }

  void Walk() override
  {
	  cout << name << "가 터벅터벅 걷는다." << endl;
  }
};

class Cat : public Animal
{
public:
	Cat(string name, string sound, int _hp) : Animal(name, sound, _hp)
	{
	}

	void Walk() override
	{
		cout << "가 살금살금 걷는다." << endl;
	}
};

int main()
{
	Animal* dog = new Dog("강아지", "멍멍", 100);
	Animal* cat = new Cat("고양이", "야옹", 100);

	Animal* animals[2] = {dog, cat};
	for (int i = 0; i < 2; i++)
	{
		animals[i]->SoundPlay();
	}

	return 0;
}