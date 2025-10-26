const fs = require('fs');

const data = JSON.parse(fs.readFileSync('C:/Users/Usuario/OneDrive/Desktop/DesafioTarget/Desafio_target/Desafio 3/dados.json', 'utf-8'));

const valores = data
  .filter(item => item.valor > 0)
  .map(item => item.valor);

const menor = Math.min(...valores);
const maior = Math.max(...valores);
const soma = valores.reduce((total, valor) => total + valor, 0);
const media = soma / valores.length;
const diasAcima = valores.filter(v => v > media).length;

console.log('--- RESULTADOS ---');
console.log(`Menor valor de faturamento: R$ ${menor.toFixed(2)}`);
console.log(`Maior valor de faturamento: R$ ${maior.toFixed(2)}`);
console.log(`Dias com faturamento acima da média: ${diasAcima}`);
