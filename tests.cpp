#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Decryption"){
    CHECK(solve("pu aopz luklhcvby svagl kpzjhykz hz bzlslzz huk bualuhisl thuf mhcvbypal jvujlwapvuz vm aol zjovvs, thuf jybkl uvapvuz vm lclyfkhf spml.") == "in this endeavour lotze discards as useless and untenable many favourite conceptions of the school, many crude notions of everyday life.");
    CHECK(solve("tf zpzaly dhuaz av lha hwwslz. zhyh pz zdpttpun pu aol vjlhu.") == "my sister wants to eat apples. sara is swimming in the ocean.");
    CHECK(solve("ebiil, tloia. f xj x kbt moldoxjjbo fk mvqelk. texq ixkdrxdb lo ixkdrxdbp xob vlr molcfzfbkq fk?") == "hello, world. i am a new programmer in python. what language or languages are you proficient in?");
    CHECK(solve("what games do you play? i play minecraft and i hate the world, i am really creative. would you like to join me?") == "what games do you play? i play minecraft and i hate the world, i am really creative. would you like to join me?");
    CHECK(solve("byffi, qilfx. nby nbcha ypyls jlialuggyl wixym qbyh nbys uly fyulhcha u hyq fuhaouay!") == "hello, world. the thing every programmer codes when they are learning a new language!");
    CHECK(solve(" ") == " ");
    CHECK(solve("!") == "!");
}
