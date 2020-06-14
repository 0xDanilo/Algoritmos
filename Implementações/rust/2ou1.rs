use std::io;

fn main() {
    let mut andre;
    let mut carlos;
    let mut pietro;

    println!("Dois ou Um!!");
      
    loop {
        
        println!("Digite 2 ou 1 para Andre: ");
//Cria uma nova string, lê a entrada de dados e armazena na variável 'andre'
        andre = String::new();
        io::stdin().read_line(&mut andre).expect("Erro ao criar string.");
//converte a string para número inteiro:
        let andre: i32 = andre.trim().parse().ok().expect("Digite apenas 2 ou 1, não uilize ponto ou virgula");
//Condição para quebrar o loop quando retornar verdadeiro
        if andre == 2 || andre == 1 {
        break;
        }
    }

//Segundo jogador: 
    loop {
            
        println!("Digite 2 ou 1 para Carlos: ");
        carlos = String::new();
        io::stdin().read_line(&mut carlos).expect("Erro ao criar string.");

        let carlos: i32 = carlos.trim().parse().ok().expect("Digite apenas 2 ou 1, não uilize ponto ou virgula");

        if carlos == 2 || carlos == 1 {
            break;
            }
    }

//terceiro jogador:
    loop {
        println!("Digite 2 ou 1 para Pietro: ");
        pietro = String::new();
        io::stdin().read_line(&mut pietro).expect("Erro ao criar string.");
    
        let pietro: i32 = pietro.trim().parse().ok().expect("Digite apenas 2 ou 1, não uilize ponto ou virgula");

        if pietro == 2 || pietro == 1 {
            break;
            }
    }

//comparações:
    if andre == carlos && carlos == pietro {
        println!("Empatooou!!");
    } 
        else if andre == carlos {
            println!("Pietro é o vencedor!!");
        } 
            else if pietro == andre {
                println!("Carlos  é o vencedor!!")
            } 
                else {
                    println!("André é o vencedor!!");
                }
    }
