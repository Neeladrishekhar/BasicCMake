#include<Person.h>
#include<AwesomeHelper.h>
#include<MyLibrary.h>

#include<iostream>

int main() {
	Circle cc;
	AwesomeHelper ah;
	Person pen(23, 55);

	std::cout << cc.DistanceSquared() << "... Testing cmake ... " << ah.index2()
	 << " " << pen.finish() << std::endl;
}
