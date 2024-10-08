#include <iostream> 
#include <string>
#include <vector>

#include "../../entities/physical/Pack.hpp"
#include "../../entities/physical/Pallet.hpp"

#include "../../../../common/nlohmannJSON/json.hpp"

class ReadJson
{
    private:
        std::vector<Pack*> outputPackVector;
        std::vector<Pack*> ingoredPacks;
        Geometry::ThreeNum_set<int> outputPalletMaxs;

        //Converts string to Json
        nlohmann::json convertStringToJson(std::string inputPath);

        //Gives pack vector as output
        void retrivePacksInfos(nlohmann::json inputJson);

        bool checkPackInfos(nlohmann::json input);

    public:
        ReadJson(std::string stringFileContent);
        const std::vector<Pack*> getPackVector();
        const std::vector<Pack*> getPackIgnoredPackVector();
        const Geometry::ThreeNum_set<int> getPalletInfos();
};


