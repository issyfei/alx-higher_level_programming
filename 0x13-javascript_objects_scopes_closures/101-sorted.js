#!/usr/bin/node
const fdict = require('./101-data').dict;

const totalist = Object.entries(fdict);
const vals = Object.values(fdict);
const valsUniq = [...new Set(vals)];
const newDict = {};
for (const j in valsUniq) {
  const list = [];
  for (const k in totalist) {
    if (totalist[k][1] === valsUniq[j]) {
      list.unshift(totalist[k][0]);
    }
  }
  newDict[valsUniq[j]] = list;
}
console.log(newDict);
