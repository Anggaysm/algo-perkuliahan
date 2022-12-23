function tambahan() {
  let total = 0;
  for (let luar = 3; luar >= 1; luar--) {
    let hasil = 0;
    for (let dalem = 1; dalem <= luar; dalem++) {
      hasil = hasil + dalem;
      if (dalem < luar) {
        console.log(" + ");
      } else {
        console.log(dalem);
      }
    }
    total = total + hasil;
    console.log(" = ", hasil);
  }
}
