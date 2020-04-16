

#include "doctest.h"
#include "FamilyTree.hpp"
using namespace family;
#include <string>
using namespace std;

#include <iostream>
#include "string.h"
#include <stdexcept>
#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <exception>
#include <bits/stdc++.h>


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
    CHECK(t.relation("netanel")==string("unrelated"));
}
/*
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
    t.remove("robert");
    CHECK_THROWS(t.relation("robert"));
}

    */