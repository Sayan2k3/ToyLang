
// frontend.js
const express = require('express');
const { execFile } = require('child_process');
app.post('/lower', (req, res) => {
  execFile('mlir-opt', ['--toy-to-std'], { input: req.body.ir }, (err, out) => {
    res.send({ lowered: out });
  });
});
