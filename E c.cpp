#include <iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void inputDimensions() {
		cout << "请输入长方柱的长、宽、高 (以空格分隔): ";
		cin >> length >> width >> height;


	}

	double calculateVolume() const {
		return length * width * height;
	}


};
int main() {
    Cuboid cuboids[3];  // 创建 3 个长方柱对象

    // 输入3个长方柱的长、宽、高
    for (int i = 0; i < 3; i++) {
        cout << "输入第" << (i + 1) << "个长方柱的尺寸:" << endl;
        cuboids[i].inputDimensions();
    }

    // 输出3个长方柱的体积
    for (int i = 0; i < 3; i++) {
        cout << "第" << (i + 1) << "个长方柱的体积: " << cuboids[i].calculateVolume() << endl;
    }

    return 0;
}