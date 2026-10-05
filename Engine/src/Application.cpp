#include <Engine/Application.h>

#include <iostream>

Application::Application()
{
    std::cout << "Application created" << std::endl;
}

Application::~Application()
{
    std::cout << "Application destroyed" << std::endl;
}

void Application::Run()
{
    m_Running = true;
    std::cout << "Application running" << std::endl;
    
    int iterations = 5;
    
    while (iterations-- > 0)
    {
        Update();
    }
}

void Application::Update()
{
    std::cout << "Application updating" << std::endl;
}
