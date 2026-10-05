#pragma once

class Application
{
public:
    Application();
    ~Application();
        
    void Run();
    void Update();
        
    bool m_Running{ false };
};
