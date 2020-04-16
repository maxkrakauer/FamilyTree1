/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "FamilyTree.hpp"
using namespace family;

#include <string>
using namespace std;



TEST_CASE("Family of Jim") {
    family::Tree t("jim");
    CHECK(t.relation("jim") == string("me"));
    CHECK_THROWS(t.find("father"));
    t.addFather("jim","dan");
    t.addFather("dan","tim");
    t.addMother("tim","dana");
    CHECK(t.relation("dan") == string("father"));
    CHECK(t.relation("tim") == string("grandfather"));
    CHECK(t.relation("dana") == string("great-grandmother"));
    CHECK_THROWS(t.relation("netanel"));

}

TEST_CASE("Family of robert"){
    family::Tree t("robert");
    t.addFather("robert","tommy");
    t.remove("tommy");
    CHECK(t.relation("tommy") == string("unrelated"));
    t.addFather("robert","joe");
    t.addFather("robert","thomas");
    t.addMother("robert","tommy");
    CHECK(t.find("mother") == string("tommy"));
    CHECK(t.relation("joe") == string("unrelated"));
    CHECK(t.find("father") == string("thomas"));
}

/* Add more test cases here */
/*
CHECK_THROWS(find(text,"forbeav"));
*/


/*

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
   
}

*/