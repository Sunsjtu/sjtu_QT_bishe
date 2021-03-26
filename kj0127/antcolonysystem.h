#ifndef ANTCOLONYSYSTEM_H
#define ANTCOLONYSYSTEM_H
#define N 275
#define M 75
class AntColonySystem
{
private:
    double info[N][N], visible[N][N]; //节点之间的信息素强度,节点之间的能见度
    double Lnn;
public:
    AntColonySystem()
    {
    }
    //计算当前节点到下一节点转移的概率
    double Transition(int i, int j);
    //局部更新规则
    void UpdateLocalPathRule(int i, int j);
    //初始化
    void InitParameter(double value);
    //全局信息素更新
    void UpdateGlobalPathRule(int* bestTour, int globalBestLength);
};


#endif // ANTCOLONYSYSTEM_H
