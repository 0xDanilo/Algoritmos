use std::io;

fn main() {
    println!("Cálculo da Tabuada");
    println!("Digite um multiplicador: ");

    //Recebe os dados e cria uma String
    let mut multiplicador = String::new();
    io::stdin().read_line(&mut multiplicador).expect("Digite apenas números de 1 a 10.");

    //Converte a string para um número inteiro, essa foi a parte mais difícil de encontrar.
    let multiplicador: i32 = multiplicador.trim().parse().ok()
                    .expect("Digite apenas números de 1 a 10.");
    
    println!("Essa é a tabuada do {}:", multiplicador);
    for i in 0..11 {
        let resultado = multiplicador * i;
        println!("Resultado: {} x {} = {}", multiplicador, i, resultado);
    }
}