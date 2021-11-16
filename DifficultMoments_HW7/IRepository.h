#pragma once

namespace University
{
    class IRepository
    {
        virtual void Open() = 0; // бинарная десериализация в файл
        virtual void Save() = 0; // бинарная сериализация в файл
    };
}