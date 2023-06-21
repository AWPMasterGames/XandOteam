#pragma once
class ISaveLoadEngine {
public:
	virtual void SaveToFile() = 0;
	virtual void LoadFromFile() = 0;
};